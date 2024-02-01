#ifndef DHT_H
#define DHT_H

class DHT
{
public:
    DHT();
    ~DHT();

    void begin(void);
    float readTemperature();

private:
    float temperature;
};

#endif // DHT_H
