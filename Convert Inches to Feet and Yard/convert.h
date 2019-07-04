#define Convertfeet 12.0
#define Convertyard 36.0

float convert_to_feet(float inches)
{
    float feet=0.0;
    feet = inches/Convertfeet;
    return feet;
}

float convert_to_yard(float inches)
{
    float yard=0.0;
    yard = inches/Convertyard;
    return yard;
}