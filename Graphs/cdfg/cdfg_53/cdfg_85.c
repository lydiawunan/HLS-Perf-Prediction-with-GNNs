#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 513769420
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[5], unsigned long p_7[3][4], int p_17,
           unsigned short p_21[5], float p_27)
{
  unsigned long v_25;
  int v_23;
  char v_19;
  float v_15;
  int v_13;
  unsigned long v_11;
  double v_9;
  signed char v_5;
  unsigned short v;
  double result;
  v_25 = 4294945562UL;
  v_23 = (int)p_7[1][3];
  v_19 = (char)-77;
  v_11 = (unsigned long)p_27;
  v_9 = 769.334119788;
  v = (unsigned short)p_7[1][1];
  result = 281.616763369;
  v_13 = (int)v_19;
  if ((unsigned long)(- (- result * (p[2] + (double)p_21[1]))) <= ((unsigned long)v_23 + 
                                                                   (unsigned long)p_21[0] / (
                                                                   v_25 + 635UL)) / (unsigned long)(
                                                                  ((unsigned int)v % 28693U | (unsigned int)(
                                                                   p[0] / (double)(
                                                                   p_27 + 24.f))) + 257U)) {
    v_5 = (signed char)(((long long)v_9 & (long long)v_11 / 24678LL) >> (
                        ~ v_13 & 63));
    v = (unsigned short)((unsigned long)((int)9831478272.f % (56 * (int)((signed char)p[0]) + 806)) - 
                         (unsigned long)(~ v_5) * p_7[2][0]);
    result = (double)((int)((unsigned short)p[0]) * (int)v);
  }
  else {
    v_19 = (char)35;
    v_15 = (float)(((int)(p[3] - -110.) + 112 % (p_17 + 951)) % ((int)((char)(- p[4])) * (int)v_19 + 483));
    result = (double)((long long)v_13 % ((-39110LL / ((long long)v_15 + 803LL) - (long long)(
                                          p_7[0][2] % (unsigned long)(
                                          p_17 + 598))) + 755LL));
  }
  return result;
}


