#include <iostream>
#include <stdint.h>

using namespace std;

class Integer
{
	private:
		int32_t v;
		
	public:
		static int32_t instances;
		Integer( const int32_t value = 0) : v(value){ instances++;}
		~Integer() {instances--;}
		int32_t getValue() {return v;}
		void setValue( int32_t value ) {v = value;}
        void TuWas(void);
        int TuWas(int i);
};

void Integer::TuWas(void)
    {
        cout << "Jausa\n";
    }
int Integer::TuWas(int i)
    {
        cout << "Macht nix!\n";
    }


int32_t Integer::instances = 0;

int main ()
{
	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;

	Integer* alpha = NULL;
	{
		 alpha = new Integer;	//Hier entsteht eine namenslose Instanz von Integer auf welche der Pointer alpha zeigt
	}
	alpha->setValue(5);
	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;
	Integer beta(4); //So existiert beta auch
		
	int32_t c = alpha->getValue() + beta.getValue();

	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;
	
	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;

	cout << "Der Wert von C ist: " << c << endl;
	
	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;

	{
		Integer gamma(7);
		cout << "Der Wert von gamma ist: " << gamma.getValue() << endl;
		cout << "Anzahl Instanzen ist: " << Integer::instances << endl;
	} // gamma stirbt!
	
	cout << "Anzahl Instanzen ist: " << Integer::instances << endl;
	delete alpha;
	return 0;

    beta.TuWas();
    beta.TuWas(5);
}

