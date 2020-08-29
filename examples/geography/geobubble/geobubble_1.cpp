#include <cmath>
#include <matplot/matplot.h>

int main() {
    using namespace matplot;

    std::vector<double> tsunami_lon = {128.3, -156, 157.95, 143.85, -155, -82.4, 159.5, 156.5, 147.4, 178.2, 141.7, -86.883, -32.283, -72, 23, -175.629, 137, -99, -79.5, 104, -136.52, 148.54, 148.8, 159.8, 156, -111.215, -72.75, 143.4, 143.7, -74.5, -80.7, 147.9, 168.5, 160.5, 142.8, 22.05, 149.54, 150.1, -176.6, -147.5, 139.2, 178.55, 22.4, 167.2, 167.6, 160.8, -78.8, -70.6, 166.5, 164.8, 166.8, 97.3, -79.8, 24.9, 132.5, 143.2, 143.1, 119.8, -92.6, 118.9, 147.9, 163.6, 121.7, -78.8, 145.5, -71.2, 153.9, 153.2, 141.2, 146.6, 147, -103, 156.6, 145.8, 155.9, 155.6, -77.79, -128.633, -17.649, 147.734, 155.054, 125.993, -155.024, 124.023, 118.464, -78.52, 142.03, -96.591, -101.276, 136.04, 7.25, -79.358, -122.18, 142.361, 127.924, 139.102, 139.099, 72.11, -71.871, 114.185, 152.828, -102.533, -101.647, -174.776, 147.689, 14.97, 121.013, -83.073, -124.316, -87.34, 121.896, 139.197, 144.801, 127.733, 112.835, 112.892, 133.366, 152.214, 147.321, 127.98, -135.3, 121.067, 143.419, 125.127, -70.294, -104.205, 130.175, 130.148, 149.3, 119.931, 22.083, 159.318, 136.952, -79.587, 131.468, 166.676, 162.035, 162.035, -62.18, 141.926, 124.891, -62.18, 29.864, 168.214, 120.15, 123.573, -120.65, 152.169, -73.641, 167.856, 124.249, 142.945, 134.297, 3.634, -62.18, 143.91, 95.982, 97.108, 127.214, -62.18, 107.411, 153.266};

    std::vector<double> tsunami_lat = {-3.8, 19.5, -9.02, 42.15, 19.1, 43.1, 52.75, 50, -2.4, -18.3, 34, 41.7, 67.8, -30, 39.5, 51.292, -1.5, 16.5, 1.2, -4.5, 58.34, 44.53, 44.2, 53.4, -7.5, 44.712, -15.75, 39.8, 39.4, -39.5, -6.8, 43.2, -18.5, -9.9, 38, 38.42, 44.81, 44.1, -24.8, 61.1, 38.65, 51.29, 38.4, -15.8, -15.9, -10.3, -10.7, -25.5, -11.8, -11.3, -11.8, 5.5, -10.6, 39.4, 32.3, 40.8, 39.4, 0.2, 15.6, -3.1, 43.6, 57.7, 15.8, -9.2, -4.9, -32.5, -5.5, -4.9, 46.5, -6.5, -6.7, 18.48, 50.5, 43.2, -7.5, -7.4, -12.27, 54.083, 35.997, 43.024, -6.59, 12.54, 19.334, 6.262, -11.085, -10.233, 38.19, 16.01, 17.813, -1.679, 43.7, 1.598, 46.2, 42.158, -4.056, 40.462, 41.346, -6.852, -33.135, -9.245, -4.439, 18.19, 17.802, 51.52, -6.088, 38.41, 18.606, 9.685, 40.368, 11.742, -8.48, 42.851, 12.982, 1.015, -10.477, -10.362, -10.777, -4.238, 43.773, -1.258, 59.5, 13.525, 40.525, -8.378, -23.34, 19.055, 27.929, 28.094, 44.663, 0.729, 38.367, 54.45, -0.891, -9.593, 31.885, -12.584, 54.841, 54.841, 16.72, -2.961, -2.071, 16.722, 40.748, -16.423, 5.1, -1.105, 34.5, -3.98, -16.265, -17.6, 6.033, -3.302, -1.757, 36.964, 16.722, 41.815, 3.295, 2.085, -3.595, 16.722, -9.254, 46.592};

    std::vector<double> tsunami_height = {2.8, 3.6, 6, 6.5, 1, 1.52, 18, 1.5, 1.4, 3, 3, 3, 18.28, 1, 1.2, 15.24, 1.8, 2.5, 1, 1, 524.26, 5, 1, 2, 2.4, 1, 5.7, 1, 1.5, 25, 9, 1, 1.5, 1, 1, 3, 4.5, 15, 1, 67, 5.8, 10.7, 3, 7, 2, 1.4, 3, 1, 2, 1.5, 2, 2, 2, 1.2, 2.4, 6, 3, 10, 2, 4, 5, 15, 2, 1.8, 3, 1.2, 3, 3, 2, 1.8, 1.5, 1.16, 1.5, 4.5, 1.5, 4.5, 1.8, 8.2, 2.1, 5.5, 2, 4, 14.3, 4.48, 15, 1.2, 1, 1.5, 1.3, 2, 10, 6, 250, 1.3, 3, 14.5, 1, 1.5, 3, 2, 1.3, 3, 2.5, 1.4, 1.5, 5.5, 1.03, 3, 1.8, 10, 26.2, 31.7, 2.1, 2, 13, 3.7, 3, 1.2, 11, 3, 7.62, 7.3, 1.1, 4, 3, 5.1, 2.6, 1.5, 1.1, 3.4, 2, 30, 7.7, 5.1, 1.1, 3, 1.5, 8, 3, 15, 2.75, 2, 2.52, 6, 20, 6, 7, 1, 7, 3, 3, 4, 5, 2, 4, 4, 50, 3, 3.5, 1, 10, 1.8};

    auto log_tsunami_height = transform(tsunami_height, [](double x) { return log(x+2); });

    geobubble(tsunami_lat, tsunami_lon, log_tsunami_height);

    wait();
    return 0;
}