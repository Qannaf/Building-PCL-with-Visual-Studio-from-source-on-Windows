#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

using namespace pcl;
using  namespace std;
using namespace pcl::io;

typedef PointCloud<PointXYZ> Point;

int main(int argc, const char* argv[])
{
    // initial variable
    Point cloud;

    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.points.resize(cloud.width * cloud.height);

    for (size_t i = 0; i < cloud.points.size(); ++i) {
        cloud.points[i].x = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].y = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].z = 1024 * rand() / (RAND_MAX + 1.0f);
    }

    savePCDFileASCII("test_pcd.pcd", cloud);
    cout << "Saved " << cloud.points.size() << " data points to test_pcd.pcd." << endl;

    for (size_t i = 0; i < cloud.points.size(); ++i)
        cout << "    " << cloud.points[i].x << " " << cloud.points[i].y << " " << cloud.points[i].z << endl;

    cout << "Hello, World!\n";
    return 0;
}