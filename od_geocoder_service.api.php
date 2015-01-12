<?php

/**
 * @file
 * API documentation for the od_geocoder_service module.
 */

/**
 * Alter address item of address array.
 *
 * Implements hook_od_geocoder_service_file_geocode_alter(&$obj)
 *
 * @param $obj
 */
function hook_od_geocoder_service_file_geocode_alter(&$obj) {
 /* example of $obj var_dump()
 * Array
(
    [_id] => MongoId Object
        (
            [$id] => 54994ab1d255f7c2445071da
        )

    [email] => user@mail.ru
    [column] => 1
    [delim] => 0
    [hash] => 2dbdc25598fcbe694402d134f64a1d6a
    [fid] => 117892
    [status] => 2
    [address_input] => Array
        (
            [0] => Москва
            [1] => Ижевск
        )

    [address_output] => Array
        (
            [Москва] => Array
                (
                    [Lat] => 55,5506123304367
                    [Lon] => 37,3857868611813
                )

            [Ижевск] => Array
                (
                    [Lat] => 56,8667016625404
                    [Lon] => 53,1999638788402
                )

        )

    [date] => MongoDate Object
        (
            [sec] => 1419353931
            [usec] => 0
        )

)
 */
}
