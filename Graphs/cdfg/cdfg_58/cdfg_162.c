#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72191986
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, unsigned long p_4, unsigned int p_6[2][1][1],
           double p_8, short p_19)
{
  int v_29;
  unsigned char v_27;
  float v_25;
  long v_23;
  unsigned char v_21;
  unsigned int v_17;
  unsigned int v_15;
  unsigned long long v_13;
  char v_11;
  unsigned long v;
  double result;
  v_29 = (int)p;
  v_27 = (unsigned char)p_4;
  v_25 = -1.32429440106e+38f;
  v_23 = -654335283L;
  v_15 = (unsigned int)p_8;
  v_13 = (unsigned long long)p_8;
  v_11 = (char)p_6[0][0][0];
  result = -414.908393322;
  if ((unsigned long long)((! p_4 * (unsigned long)(61U & v_15)) * (unsigned long)(
                           515U / (p_6[0][0][0] + 1021U))) <= (unsigned long long)(! (~ p_19)) - 
                                                              4294984774ULL % (unsigned long long)(
                                                              (int)p_19 + 743)) {
    v = (unsigned long)p_6[0][0][0] ^ - ((unsigned long)p | p_4);
    v_13 = (unsigned long long)(- p_8);
    v_15 = (unsigned int)((unsigned long)((long)result + v_23) + p_4);
  }
  else {
    v_11 = (char)(((unsigned long long)(- v_25) / ((18446744073709530982ULL + (unsigned long long)p_8) + 625ULL)) / (unsigned long long)(
                  ((int)v_27 - v_29) * (int)v_11 + 504));
    v = (unsigned long)(- (((unsigned long long)p_8 / (v_13 + 561ULL)) % (
                           v_13 + 727ULL)));
    v_15 = (unsigned int)(p_4 + (unsigned long)((int)(! p_19) % ((int)((short)(- p_8)) + 928)));
  }
  while ((double)p_4 > (double)(4294967212U - p_6[0][0][0] / ((unsigned int)p_8 + 885U)) + (
                       result + - result)) {
    v_21 = v_13 * (unsigned long long)((unsigned long)v_11 / ((v - 119UL) + 474UL));
    v_17 = (unsigned int)(~ ((int)p_8 - ((int)((char)p_8) & -126)));
    v = (unsigned long)(~ (p_6[1][0][0] * (unsigned int)p_8)) % ((unsigned long)(
                                                                 v_15 * (unsigned int)v_21) % (
                                                                 (unsigned long)v_17 / (
                                                                 p_4 + 121UL) + 365UL) + 253UL);
    result = (double)(v_15 + (v_17 & p_6[0][0][0]) % (unsigned int)((int)p_19 + 1000));
  }
  while_0_break: ;
  return result;
}


