#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 613933347
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[2][2][4], unsigned char p_7,
                 unsigned short p_9, double p_19)
{
  double v_17;
  unsigned int v_15;
  unsigned short v_13;
  long v_11;
  signed char v_5;
  char v;
  unsigned int result;
  v_17 = -9897286910.97;
  v_15 = (unsigned int)p_19;
  v_11 = (long)p_9;
  v_5 = (signed char)78;
  v = (char)p_9;
  result = 95U;
  while (~ ((unsigned int)v + result) % 4294967208U != 4294967253U) {
    v_5 = v_15 / 114U;
    v_11 = (long)(- p_19 * (double)((unsigned int)(! v_5) - 16594U));
    result = (unsigned int)(- ((double)((int)p[1][1][3] % -65) * 3.55187004249e-31));
    v = (char)((unsigned int)1.18528023347e+38 | ((unsigned int)((int)p[1][1][0] + (int)((unsigned char)v_17)) + (
                                                  result + 3454577489U)));
  }
  while_0_break: ;
  while (702638951 > (int)((double)((int)p[1][0][1] & (int)v) + 98867.562156) - (
                     (int)v_5 - ((int)p_7 + (int)p_9))) {
    v_11 %= -18208069L;
    v_13 = (unsigned short)397;
    result = (unsigned int)((4676 / ((int)(- p_9) + 895)) * (int)(! (~ v_13)));
    v_5 = (signed char)(! (! 35297U));
  }
  while_0_break_0: ;
  return result;
}


