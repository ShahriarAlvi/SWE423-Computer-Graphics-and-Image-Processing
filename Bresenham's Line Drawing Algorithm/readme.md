# Bresenham's Line Drawing Algorithm

Bresenham's Line Drawing Algorithm is a method for efficiently drawing a line between two points on a grid. It optimally determines which pixels to turn on to approximate the line. The algorithm is widely used in computer graphics for its simplicity and efficiency.

The Bresenham Algorithm begins by calculating differences in x and y and determining the decision parameter based on the line equation. It then iterates over x-values, updating the y-coordinate based on the decision parameter. The decision parameter is adjusted during this process. Finally, the algorithm marks pixels at each (x,y) coordinate, efficiently approximating the line on a grid.

When \(0 < \text{slope}(m) < 1\), this default mechanism is followed. But when \(m > 1\), the Bresenham's Algorithm adjusts its approach. It swaps the roles of x and y, with a primary focus on updating the x-coordinate.

## Reasons for Adjustment:

1. The line is steeper when \(m > 1\). If we update the y-coordinate for each x-value, it may cause oversampling, therefore inefficient plotting of pixels. We focus on the x-coordinate and ensure a more efficient update strategy.

2. Here, x acts as the primary variable. The decision parameter (\(D\)) updates are optimized for the specific slope conditions.

3. Updating the x-coordinate as the primary variable aligns with the natural progression of x-values along the line. It leads to reduced computational complexity, ensuring faster execution and better performance.

## Output for the Given Code:

### Case 1:
```
(1, 1) (2, 1) (3, 2) (4, 2) (5, 3) (6, 3) (7, 4) (8, 4) 
. . . . . . . . . . 
. * * . . . . . . . 
. . . * * . . . . . 
. . . . . * * . . . 
. . . . . . . * * . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
```

### Case 2:
```
(1, 1) (1, 2) (2, 3) (2, 4) (3, 5) (3, 6) (4, 7) (4, 8)
. . . . . . . . . .
. * . . . . . . . .
. * . . . . . . . .
. . * . . . . . . .
. . * . . . . . . .
. . . * . . . . . .
. . . * . . . . . .
. . . . * . . . . .
. . . . * . . . . .
. . . . . . . . . .
```

