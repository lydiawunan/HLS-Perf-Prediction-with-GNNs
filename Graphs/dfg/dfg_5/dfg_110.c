//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194927540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[2][3][3], int p_4[4][2][5], short p_6,
          double p_11[1][4][4], double p_13)
{
  unsigned char v_21;
  unsigned int v_19;
  double v_17;
  int v_15;
  double v_9;
  unsigned int v;
  short result;
  v_21 = (unsigned char)87;
  v_19 = (unsigned int)p_11[0][0][1];
  v_9 = -2.43494559781e+38;
  v = (unsigned int)p[0][1][1];
  v_15 = (int)(4294933258UL << (! (! ((int)v_21 * (int)p_6)) & 31));
  v_17 = (double)(! ((v_19 - 4294967229U) / (v_19 % ((unsigned int)p_11[0][2][1] + 640U) + 600U))) / (
         0. / (- ((double)p_4[3][0][0] / (p_11[0][1][2] + 828.)) + 34.) + 342.);
  v = (unsigned int)((double)(! (- v_15) << (((unsigned long)(v_17 + (double)p_4[0][0][4]) + p[0][1][0]) & 31UL)) / (
                     (p_11[0][0][3] + (double)((unsigned long)v_15 + p[1][1][0])) * (double)(
                     - v / (unsigned int)(- p_4[0][1][4] + 938)) + 876.));
  result = (short)((p[0][1][2] - (unsigned long)((unsigned int)(p_4[3][0][2] / (
                                                                (int)p_6 + 292)) + 
                                                 v % ((unsigned int)v_9 + 373U))) * (unsigned long)(- (
                   (p_11[0][1][1] - -2675134976.) + p_13)));
  return result;
}


