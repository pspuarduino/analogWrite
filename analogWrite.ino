int led = 9;           // подключаемся к 9 пину
int brightness = 0;    // начальный уровень освещения
int fadeAmount = 5;    // шаг наращения

void setup()
{
  pinMode(led, OUTPUT); // переводим 9 пин в режим выхода тоесть мы будем управлять напряжением
} 

void loop()
{
  analogWrite(led, brightness); // увеличиваем / уменьшаем уровень напряжения - от 0 до 5 и обратно
  brightness = brightness + fadeAmount; // наращиваем
  if (brightness == 0 || brightness == 255) { // чтобы избежать переполнения
    fadeAmount = -fadeAmount ; // инвартируем шаг
  } 
  delay(30); // задержка для стабильной работы                           
}

