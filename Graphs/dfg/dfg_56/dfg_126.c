#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 703452514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p[3][1][5], unsigned short p_7, float p_17)
{
  unsigned char v_21;
  double v_19;
  double v_15;
  double v_13;
  double v_11;
  unsigned long v_9;
  unsigned char v_4;
  char v;
  unsigned int result;
  v_21 = (unsigned char)219;
  v_19 = (double)p_17;
  v_15 = (double)p[2][0][3];
  v_13 = 2263189241.19;
  v_9 = 4294910949UL;
  v = (char)-116;
  result = 4294933762U;
  v_4 = (unsigned char)((double)p_17 * v_19 - (((double)((float)p[0][0][2] * p_17) + (
                                                v_13 - (double)v_21)) - (double)(- (- p_17))));
  v_11 = (double)v_9;
  v_9 = (unsigned long)(- v_15 / ((double)(result & (unsigned int)((int)(- p_7) % (
                                                                   (int)((unsigned short)(- v_15)) + 426))) + 135.));
  result = (unsigned int)((unsigned long)(0U % (unsigned int)(((int)v ^ (int)v_4) + 739) + 
                                          4294967245U % (62185U * p[0][0][1] + 910U)) - (
                          (unsigned long)(- p[1][0][3]) / ((unsigned long)p_7 * v_9 + 358UL) + (unsigned long)(
                          -1.82997776978e+38 / (v_11 + 689.) - - v_13)));
  return result;
}


