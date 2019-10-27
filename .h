class Pilot {
public:
	int sati;
	bool letili;
	Pilot() { bool letilit = false; };  //podrazumevani
	Pilot(string pime, int psati, bool pletili = false) {  //konvertujuci, pletili je podrazumevana ako se ne zada ni jedna vrednost
		ime = pime;
		sati = psati;
		letili = pletili;
	}
	~Pilot() {};  //destruktor
	void printpilot() const;
private:
	string ime;
};

class Avion {
public:
	int max;  //maksimalan broj putnika koje moze da primi
	Avion() {};  //podrazumevani
	Avion(string anaziv, Pilot akapetan, Pilot akopilot, int amax) {  //konvertujuci
		naziv = anaziv;
		max = amax;
		if (akapetan.sati > 100) {
			kapetan = akapetan;
			kopilot = akopilot;
		}
		else {
			if (akopilot.sati > 100) {
				kapetan = akopilot;
				kopilot = akapetan;
			}
			else cout << "Ne postoji odgovarajuci pilot!" << endl;
		}
		kapetan.letili = true;
		kopilot.letili = true;
	}
	~Avion() {};  //destruktor
	void printavion() const;
private:
	string naziv;
	Pilot kapetan;
	Pilot kopilot;
};

class Flota {
public:
	Flota() { avioni = nullptr; int broj = 0; };  //podrazumevani
	Flota(int duzina) { avioni = new Avion [broj = duzina]; }
	~Flota() { delete[] avioni; avioni = nullptr; broj = 0; }  //ovde obavezno destruktor jer je dimnamicko
	int maxputnika(Avion *avioni);
	int brojaviona(Avion *avioni);
	Avion anajbrput();
	void pritnflota() const;
	void ime(string naziv);
	string naziv;
private:
	int broj;
	Avion* avioni;
};
