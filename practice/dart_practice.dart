
abstract class Object {
	void swim();
	void fly();
}

class Fish implements Object{
	@override
    void swim(){
	   print('魚會游泳');
  }
	@override
    void fly(){
	   print('魚不會飛');
  }
}

class Bird implements Object{
	@override
    void swim(){
	   print('鳥不會游泳');
  }
	@override
    void fly(){
	   print('鳥會飛');
  }
}

class Plane implements Object{
	@override
    void swim(){
	    print('飛機不會游泳');
  }
	@override
    void fly(){
		print('飛機會飛');
  }
}

class FlyFish extends Fish{

	@override
  	void fly(){
	  print('飛魚會飛');
  }
}

void main(){

	Fish fish1 = new Fish();
	Bird bird1 = new Bird();
	Plane plane1 = new Plane();
	FlyFish jason = new FlyFish();

	fish1.swim();
	bird1.swim();
	plane1.swim();
	jason.swim();
	
}