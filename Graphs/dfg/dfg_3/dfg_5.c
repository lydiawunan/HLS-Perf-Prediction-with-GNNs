//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 450370762
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p[1][2], short p_4, int p_9[4], unsigned short p_13,
           float p_15)
{
  double v_11;
  unsigned int v_7;
  double v;
  double result;
  v_11 = (double)(- (-3446.f + (((float)p_13 + p_15) + (float)(p_9[1] << (
                                                               p[0][0] & 31U)))));
  v_7 = 508776778U;
  v = (double)p_9[0];
  result = (double)((unsigned int)(- ((double)(- p[0][0]) + (double)p_4 * v)) ^ 
                    v_7 * 395775808U);
  return result;
}


