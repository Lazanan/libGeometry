class Cylinder
{
	private:
		float radius;
		float height;
		std::string color;
		std::string name;
	public:
		Cylinder();
		~Cylinder();
		void setHeight(float h);
		void setRadius(float r);
		void setColor(std::string c);
		void setName(std::string n);
		void display();
		float getHeight();
		float getRadius();
		std::string getColor();
		std::string getName();
};
