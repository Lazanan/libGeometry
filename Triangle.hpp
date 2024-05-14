class Triangle{
	private:
		float sideOne;
		float sideTwo;
		float sideThree;
		std::string color;
		std::string name;
	public:
		Triangle();
		~Triangle();
		void setSideOne(float so);
		void setSideTwo(float stw);
		void setSideThree(float sth);
		void setColor(std::string c);
		void setName(std::string n);
		void display();
		float getSideOne();
		float getSideTwo();
		float getSideThree();
		std::string getColor();
		std::string getName();
};
