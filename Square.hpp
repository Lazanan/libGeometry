class Square{
	private:
		float width;
		std::string color;
		std::string name;
	public:
		Square();
		~Square();
		void setWidth(float w);
		void setColor(std::string c);
		void setName(std::string n);
		void display();
		float getWidth();
		std::string getColor();
		std::string getName();
};
