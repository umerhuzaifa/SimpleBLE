#include <simpleble/Exceptions.h>

using namespace SimpleBLE;
using namespace SimpleBLE::Exception;

InvalidReference::InvalidReference() : std::runtime_error("Underlying reference to object is invalid") {}

ServiceNotFound::ServiceNotFound(BluetoothUUID uuid) : std::runtime_error("Service with UUID " + uuid + " not found") {}

CharacteristicNotFound::CharacteristicNotFound(BluetoothUUID uuid)
    : std::runtime_error("Characteristic with UUID " + uuid + " not found") {}
