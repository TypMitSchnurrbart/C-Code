"""
Main for a small scheduler sim with gui; this its mainly for testing at the moment
"""
import sys
import time

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

from scheduler_sim_gui import Ui_main_window

class Window(QMainWindow, Ui_main_window):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.start_btn_state)

    def start_btn_state(self):
        if not self.pushButton.isChecked():
            self.threadpool = QThreadPool()
            self.start_app()

    def start_app(self):

        test_worker = Counter_Worker(self)
        self.threadpool.start(test_worker)


class Counter_Worker(QRunnable):

    def __init__(self, window_to_work):
        super(Counter_Worker, self).__init__()
        self.window = window_to_work

    def run(self):
        single_core = Processor()

        while single_core.get_clock_time() <= 10:
            #TODO interrupt button as statement
            clock_time = single_core.get_clock_time_step()
            time.sleep(1)
            self.window.system_clock_display.display(clock_time)
            self.window.system_clock_display.repaint()
        
        clock_time = single_core.reset_clock_time()
        self.window.system_clock_display.display(clock_time)

class Processor():
    def __init__(self, clock_time = 0):
        self.clock_time = clock_time

    def get_clock_time(self):
        return self.clock_time

    def get_clock_time_step(self):
        self.clock_time += 1
        return self.clock_time
    
    def reset_clock_time(self):
        self.clock_time = 0
        return self.clock_time

if __name__ == "__main__":

    app = QApplication(sys.argv)
    win = Window()
    win.show()
    sys.exit(app.exec())
