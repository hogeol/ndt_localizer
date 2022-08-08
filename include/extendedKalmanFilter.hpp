#ifndef _EXTENDED_KALMAN_FILTER_
#define _EXTENDED_KALMAN_FILTER_

#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Geometry>


namespace ExtendedKalmanFilter{
  class extendedKalmanFilter{
  private:
    Eigen::VectorXd m_prev_state;
    
    
  public:
    void init(const int &window_size);
      extendedKalmanFilter();
  };
}

#endif _EXTENDED_KALMAN_FILTER_
