#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 539232130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, signed char p_11[1][5], char p_13)
{
  signed char v_17;
  signed char v_15;
  unsigned int v_9;
  signed char v_7;
  char v_5;
  signed char v;
  unsigned char result;
  v_17 = p_11[0][2];
  v_15 = (signed char)104;
  v_9 = 4232387007U;
  v_5 = p;
  v = p_11[0][4];
  result = (unsigned char)p_13;
  if ((int)v != (int)v_15) {
    v_15 = (signed char)((((int)p_11[0][1] + (int)v_17) % (((int)v_15 + (int)v_15) + 74)) % (
                         (int)p_11[0][0] + 239));
    v = ! v_15;
    v_9 = 11581U;
  }
  else {
    v_5 = p;
    result = (unsigned char)(((unsigned long)v_5 / (3387474192UL / (unsigned long)(
                                                    (int)p + 331) + 606UL)) / (unsigned long)(
                             ((int)v / ((int)v_17 + 282)) % ((int)(! p) + 837) + 401));
    v = (signed char)96;
  }
  if ((unsigned long)(((long)p | -55855L) % (long)(- ((int)p_11[0][1] + (int)((signed char)5197985280.f)) + 437)) != 
      (unsigned long)(- p_13) % ((671226091UL * (unsigned long)v_9 - (unsigned long)(
                                  (int)p_11[0][2] / ((int)result + 934))) + 196UL)) 
    result = (unsigned char)p;
  else {
    v_7 = (signed char)((487941341184.f + (float)v_9) + (float)v_5);
    v_5 = ! p;
    result = (unsigned char)((18446744073005072963ULL - (unsigned long long)(
                              (int)v / ((int)v_5 + 615))) / (unsigned long long)(
                             ~ ((long)v_7 / -38564L) + 552L));
  }
  return result;
}


