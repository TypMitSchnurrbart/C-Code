# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\scheduler_sim_gui.ui'
#
# Created by: PyQt5 UI code generator 5.14.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_main_window(object):
    def setupUi(self, main_window):
        main_window.setObjectName("main_window")
        main_window.resize(900, 600)
        main_window.setMinimumSize(QtCore.QSize(900, 600))
        main_window.setCursor(QtGui.QCursor(QtCore.Qt.ArrowCursor))
        main_window.setMouseTracking(False)
        main_window.setAutoFillBackground(False)
        main_window.setTabShape(QtWidgets.QTabWidget.Rounded)
        self.centralwidget = QtWidgets.QWidget(main_window)
        self.centralwidget.setObjectName("centralwidget")
        self.title_label = QtWidgets.QLabel(self.centralwidget)
        self.title_label.setEnabled(True)
        self.title_label.setGeometry(QtCore.QRect(10, 0, 201, 31))
        font = QtGui.QFont()
        font.setPointSize(16)
        self.title_label.setFont(font)
        self.title_label.setFocusPolicy(QtCore.Qt.NoFocus)
        self.title_label.setContextMenuPolicy(QtCore.Qt.NoContextMenu)
        self.title_label.setFrameShape(QtWidgets.QFrame.NoFrame)
        self.title_label.setFrameShadow(QtWidgets.QFrame.Raised)
        self.title_label.setScaledContents(True)
        self.title_label.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.title_label.setWordWrap(False)
        self.title_label.setTextInteractionFlags(QtCore.Qt.NoTextInteraction)
        self.title_label.setObjectName("title_label")
        self.system_clock_display = QtWidgets.QLCDNumber(self.centralwidget)
        self.system_clock_display.setGeometry(QtCore.QRect(160, 100, 71, 41))
        self.system_clock_display.setDigitCount(3)
        self.system_clock_display.setObjectName("system_clock_display")
        self.system_clock_label = QtWidgets.QLabel(self.centralwidget)
        self.system_clock_label.setGeometry(QtCore.QRect(10, 110, 141, 31))
        font = QtGui.QFont()
        font.setPointSize(20)
        self.system_clock_label.setFont(font)
        self.system_clock_label.setObjectName("system_clock_label")
        self.pushButton = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton.setGeometry(QtCore.QRect(10, 50, 101, 31))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.pushButton.setFont(font)
        self.pushButton.setCursor(QtGui.QCursor(QtCore.Qt.ArrowCursor))
        self.pushButton.setObjectName("pushButton")
        main_window.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(main_window)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 900, 21))
        self.menubar.setObjectName("menubar")
        self.menuOptionen = QtWidgets.QMenu(self.menubar)
        self.menuOptionen.setObjectName("menuOptionen")
        main_window.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(main_window)
        self.statusbar.setSizeGripEnabled(True)
        self.statusbar.setObjectName("statusbar")
        main_window.setStatusBar(self.statusbar)
        self.actionTest = QtWidgets.QAction(main_window)
        self.actionTest.setObjectName("actionTest")
        self.actionBeenden = QtWidgets.QAction(main_window)
        self.actionBeenden.setObjectName("actionBeenden")
        self.menuOptionen.addAction(self.actionTest)
        self.menuOptionen.addSeparator()
        self.menuOptionen.addAction(self.actionBeenden)
        self.menubar.addAction(self.menuOptionen.menuAction())

        self.retranslateUi(main_window)
        QtCore.QMetaObject.connectSlotsByName(main_window)

    def retranslateUi(self, main_window):
        _translate = QtCore.QCoreApplication.translate
        main_window.setWindowTitle(_translate("main_window", "Scheduler Simluator by Alexander Müller"))
        self.title_label.setText(_translate("main_window", "Scheduling Simluator"))
        self.system_clock_label.setText(_translate("main_window", "Clock Time:"))
        self.pushButton.setText(_translate("main_window", "Start"))
        self.menuOptionen.setTitle(_translate("main_window", "Optionen"))
        self.actionTest.setText(_translate("main_window", "Test"))
        self.actionBeenden.setText(_translate("main_window", "Beenden"))
