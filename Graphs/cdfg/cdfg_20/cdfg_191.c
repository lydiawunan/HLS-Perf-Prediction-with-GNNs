#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 865605
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, float p_7, unsigned char p_9, signed char p_11,
         unsigned int p_19)
{
  char v_25;
  short v_23;
  unsigned long long v_21;
  unsigned long v_17;
  long v_15;
  short v_13;
  double v_5;
  long v;
  char result;
  v_25 = (char)64;
  v_23 = (short)26968;
  v_21 = (unsigned long long)p;
  v_15 = (long)p_11;
  v_13 = (short)8151;
  v_5 = (double)p_9;
  v = -1059643257L;
  result = (char)p_7;
  while ((unsigned long long)((unsigned int)-2.36678023672e+37f & p_19) != 
         (unsigned long long)(~ (~ result)) % ((unsigned long long)v_13 / (
                                               ! v_21 + 441ULL) + 420ULL)) {
    v_5 = (int)v_25 / ((int)v_23 % 77 + 988);
    v_21 = (unsigned long long)(- p);
    v_5 = (double)(- ((float)v + 945.159545898f) + (float)(3261041933U - (unsigned int)(
                                                           (double)p_7 / (
                                                           v_5 + 314.))));
    v_13 = v_13;
  }
  while_0_break: ;
  while ((float)v - p < (float)((int)((v_5 - 9618552832.) * (double)p_7) & (
                                (int)p_9 ^ ((int)p_11 | (int)v_13)))) {
    v_17 = v_15 + 15L;
    v_15 = (long)(- p_19);
    result = (char)((long)(((int)p_9 ^ (int)p_9) + (int)(- p)) + ! (v_15 * -21568L));
    v_5 = (double)(v_17 / (unsigned long)(((unsigned int)result - ((unsigned int)v_5 - p_19)) + 186U));
  }
  while_0_break_0: ;
  return result;
}


