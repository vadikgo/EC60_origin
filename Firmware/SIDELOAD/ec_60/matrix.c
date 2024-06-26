#/* Copyright 2023 Cipulot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ec_switch_matrix.h"
#include "matrix.h"

extern matrix_row_t raw_matrix[MATRIX_ROWS]; // raw values
extern matrix_row_t matrix[MATRIX_ROWS];     // debounced values

// custom matrix init function
void matrix_init_custom(void) {
    // Initialize EC
    ec_init();

    // Get the noise floor at boot
    ec_noise_floor();
}

// custom matrix scan function
bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool updated = ec_matrix_scan(current_matrix);

    // RAW matrix values on console
    // #ifdef CONSOLE_ENABLE
    //  static int cnt = 0;
    //  if (cnt++ == 350) {
    //      cnt = 0;
    //      ec_print_matrix();
    //  }
    // #endif
    return updated;
}

// Bootmagic overriden to avoid conflicts with EC
void bootmagic_lite(void) {
    ;
}
