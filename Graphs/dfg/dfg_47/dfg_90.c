#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 550530725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, double p_9, char p_11, long p_13[4][1][5],
                       float p_15)
{
  float v_17;
  unsigned short v_6;
  float v_4;
  float v;
  unsigned long long result;
  v_17 = 238.871261597f;
  v_6 = (unsigned short)p;
  v = (float)p_13[3][0][4];
  result = (unsigned long long)(- (- (- p_9)) + (-575.883202563 * (double)(
                                                 p_15 * v_17) - (p * (double)v_17 - (double)(! v_6))));
  v_4 = (float)(- (-261389217. / (p / (double)(v + 504.f) + 830.)) / (
                (double)(-217051535L % (~ p_13[3][0][1] + 593L)) + 838.));
  v_6 = (unsigned short)((- p * (45612. - p) - 51.) - - (5.54413967609e+37 - (double)p_11));
  result = (unsigned long long)(((double)(v / ((float)result + 743.f) - v_4) * (
                                 (double)(-51301 + (int)v_6) + p)) * - (- (- p_9)));
  return result;
}


