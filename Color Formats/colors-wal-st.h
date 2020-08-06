const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020202", /* black   */
  [1] = "#77B9C4", /* red     */
  [2] = "#7FC0CA", /* green   */
  [3] = "#85B4B8", /* yellow  */
  [4] = "#94C7B7", /* blue    */
  [5] = "#88BCC7", /* magenta */
  [6] = "#94C6CD", /* cyan    */
  [7] = "#cbdfdf", /* white   */

  /* 8 bright colors */
  [8]  = "#8e9c9c",  /* black   */
  [9]  = "#77B9C4",  /* red     */
  [10] = "#7FC0CA", /* green   */
  [11] = "#85B4B8", /* yellow  */
  [12] = "#94C7B7", /* blue    */
  [13] = "#88BCC7", /* magenta */
  [14] = "#94C6CD", /* cyan    */
  [15] = "#cbdfdf", /* white   */

  /* special colors */
  [256] = "#020202", /* background */
  [257] = "#cbdfdf", /* foreground */
  [258] = "#cbdfdf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
