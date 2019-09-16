/*first example*/
#include <iostream>
#include <krpc.hpp>
#include <krpc/services/krpc.hpp>
#include <krpc/services/space_center.hpp>

int main() {
  auto conn = krpc::connect();
  // duda c, cuando se hace esto de aqui abajo, es renombrar la variable?
  krpc::services::KRPC krpc(&conn);
  krpc::services::SpaceCenter sc(&conn);
  std::cout << "Connected to kRPC server version " << krpc.get_status().version() << std::endl;
  // De la clase SpaceCenter, la variable vessel pasa a ser la nave activa
  auto vessel = sc.active_vessel();
  vessel.set_name("My Vessel");
  auto flight_info = vessel.flight();
  std::cout << flight_info.mean_altitude() << std::endl;
}
