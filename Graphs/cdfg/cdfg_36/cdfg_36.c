#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 877110046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned short p_9,
          unsigned short p_11[1][4], unsigned long p_15[3][3][4],
          unsigned long long p_17)
{
  char v_13;
  double v_7;
  long v_5;
  double v;
  float result;
  v_13 = (char)95;
  v = (double)(4294959538ULL * (((unsigned long long)p_15[1][2][0] - p_17) / (unsigned long long)(
                                (int)(- p_9) + 995)));
  if (- (- p) % (unsigned long long)((long)(- p_11[0][3]) * ((long)v_13 * -33335L) + 820L) != 18446744073709523029ULL) {
    v_5 = (long)v;
    v = - (- (v * (double)v_5));
    result = (float)(p ^ ~ ((unsigned long long)v << (p & 63ULL)));
  }
  else {
    v_7 = (double)(- p);
    v_7 = (double)(- ((int)((char)v_7) & -84) | (int)p_9);
    result = (float)(21 | (int)((unsigned char)(- (104.087417603 * v_7))));
  }
  return result;
}


