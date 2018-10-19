// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

string line;
ifstream myfile;
string nameFile=argv[1];
myfile.open(nameFile);
int animalcount=0;
int duckcount=0;
int nonduckscount=0;
string tobefound="duck";

while(getline(myfile, line)){
	if(line==tobefound){
		duckcount++;
	}
	else{
		nonduckscount++;
	}
	animalcount++;
}
myfile.close();

//Output printing
cout<<"Report for "<<nameFile<<":"<<endl;
cout<<"   Animal count:    "<<animalcount<<endl;
cout<<"   Duck count:      "<<duckcount<<endl;
cout<<"   Non duck count:  "<<nonduckscount<<endl;
 
return 0;
}
