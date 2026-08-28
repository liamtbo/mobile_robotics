# derived from Bill Smart, smartw@oregonstate.edu

define box model
(
      block
      (
            points 4
            point[0] [0.5 -0.5]
            point[1] [0.5 0.5]
            point[2] [-0.5 0.5]
            point[3] [-0.5 -0.5]
            z [0.0 2.0]
      )

      # average litre carton size is ~ 20cm x 10cm x 5cm ish
      size [1 1 1]

      color "DarkBlue"
)
