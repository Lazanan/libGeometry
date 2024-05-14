class Rectangle{
	private:
		float width;
		float height;
		std::string color;
		std::string name;
	public:
		Rectangle();
		~Rectangle();
		void setWidth(float w);
		void setHeight(float h);
		void setColor(std::string c);
		void setName(std::string n);
		void display();
		float getWidth();
		float getHeight();
		std::string getColor();
		std::string getName();
};
