
task main()
{
	while(1==1){
		if(SensorValue[floorOneButton] == 1){
			if(SensorValue[sonar] != 0){
				startMotor(shaftMotor, 63);
				untilSonarLessThan(sonar, 0.1);
			}
		}
	}
}
