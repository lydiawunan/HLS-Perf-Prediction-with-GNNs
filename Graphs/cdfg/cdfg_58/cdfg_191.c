#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 272742616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, signed char p_5, double p_7[4][1],
         unsigned short p_9, unsigned char p_17)
{
  double v_19;
  unsigned long long v_15;
  float v_13;
  unsigned int v_11;
  unsigned int v;
  char result;
  v_15 = 84046201ULL;
  v_13 = (float)p;
  v_19 = (double)p_9 / (p_7[1][0] / ((double)p_5 + 31.) + 194.);
  if (((unsigned long long)v_13 | (v_15 + 34506ULL)) > (unsigned long long)(- (
      (int)p_17 - (int)((unsigned char)(- v_19))))) {
    v = (unsigned int)(- p_9);
    result = (char)((unsigned int)(! p_5) / ((unsigned int)(- p_7[0][0]) * 93U + 687U));
    result = (char)((unsigned int)((int)((unsigned char)-846.898132324f) % (
                                   (int)p + 977)) - ((unsigned int)p - (
                                                     (unsigned int)result ^ v)));
  }
  else {
    v_11 = 3327719651U;
    result = (char)(! ((4294967248U - v_11) % 8572U));
  }
  return result;
}


