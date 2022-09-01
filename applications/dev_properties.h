struct dev_light
{
    int data;
    char name[20];//"MeasuredIlluminance"
};
struct dev_properties
{
    struct dev_light light;
};
