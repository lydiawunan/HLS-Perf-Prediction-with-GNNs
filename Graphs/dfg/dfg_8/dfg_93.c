//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663385235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p[3][3], unsigned long long p_7, unsigned short p_11,
          signed char p_13, int p_15)
{
  long v_19;
  unsigned char v_17;
  unsigned char v_9;
  unsigned short v_5;
  unsigned long long v;
  float result;
  v_19 = (long)p[2][1];
  v_17 = (unsigned char)254;
  v_5 = (unsigned short)64088;
  result = (float)p_11;
  v_9 = (unsigned char)(- ((float)p_13 / (result + 144.f)));
  v = (unsigned long long)(- -51554);
  result /= (float)((((unsigned long)p_13 / 4128300506UL) * (unsigned long)(
                     p_15 * (int)v_17)) / ((unsigned long)((27.285446167f - (float)p_13) / (
                                                           (float)((unsigned long long)v_19 * 18446744073709510657ULL) + 80.f)) + 755UL)) + 983.f;
  result = (float)((unsigned long long)(- (264300929LL * (long long)(
                                           19779 | (int)p[0][2]))) % (
                   (((v + (unsigned long long)v_5) + 17ULL / (p_7 + 182ULL)) & (unsigned long long)(
                    (int)(~ v_9) & ((int)p_11 + (int)((unsigned short)result)))) + 958ULL));
  return result;
}


