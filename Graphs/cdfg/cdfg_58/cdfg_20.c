#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972727905
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned short p_7, int p_13,
                  long p_15, unsigned short p_19)
{
  char v_23;
  long v_21;
  char v_17;
  float v_11;
  signed char v_9;
  unsigned long v_5;
  unsigned char v;
  unsigned long result;
  v_23 = (char)-49;
  v_21 = -51554L;
  v_5 = (unsigned long)p_19;
  v = (unsigned char)252;
  if ((unsigned int)(! p_13) == ~ ((938233696U / (unsigned int)((int)v_23 + 323)) * 4294967204U)) {
    v_17 = (char)((long)v * (((long)p_13 * 62144L) % (p_15 + 884L)));
    v_11 = (float)(246ULL - ((unsigned long long)(37 / (p_13 + 460)) | 
                             19594ULL % (p + 797ULL)));
    v_5 = (unsigned long)p_19;
  }
  else {
    v_11 = (float)v_21;
    v_9 = (signed char)(! p_7);
    v_17 = (char)v_9;
  }
  if (- ((long)p_7 + p_15 % (long)((int)v_17 + 120)) < -2138593525L) 
    result = 218UL;
  else {
    v_9 = (signed char)((int)(- (2.54997329274e+38f + v_11)) * p_13);
    v = (unsigned char)(! ((unsigned long long)v_5 - p) & (18446744072894103168ULL * (unsigned long long)p_7) / (unsigned long long)(
                                                          (int)((signed char)9.08117506449e+36) / (
                                                          (int)v_9 + 414) + 287));
    result = (unsigned long)(((p % 4106519219ULL) / 18446744073103644091ULL) % (unsigned long long)(
                             ((int)v - 35245) + 356));
  }
  return result;
}


