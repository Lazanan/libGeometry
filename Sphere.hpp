class Sphere
{
	private:
		float radius;
		std::string color;
		std::string name;
	public:
		Sphere();
		~Sphere();
		void setRadius(float r);
		void setColor(std::string c);
		void setName(std::string n);
		void display();
		float getRadius();
		std::string getColor();
		std::string getName();
};
