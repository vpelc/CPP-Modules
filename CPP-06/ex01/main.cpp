#include "Data/Data.hpp"
#include "Serializer/Serializer.hpp"

int main()
{
    Data *data = new Data;
    uintptr_t raw;

    std::cout << data->get_data() << std::endl;
    std::cout << data << std::endl;
    std::cout << "=======================" << std::endl;

    raw = Serializer::serialize(data);

    std::cout << raw << std::endl;
    std::cout << "=======================" << std::endl;

    data = Serializer::deserialize(raw);

    std::cout << data->get_data() << std::endl;
    std::cout << data << std::endl;
    std::cout << "=======================" << std::endl;

    delete data;
    return 0;
}