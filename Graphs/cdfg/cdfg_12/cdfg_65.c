#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839378433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned long long p_5, long p_7,
                  unsigned short p_11, long long p_13)
{
  unsigned int v_25;
  unsigned long long v_23;
  int v_21;
  unsigned int v_19;
  char v_17;
  signed char v_15;
  float v_9;
  unsigned int v;
  unsigned long result;
  v_25 = 170231872U;
  v_23 = (unsigned long long)p;
  v_21 = 7324;
  v_19 = 3689355589U;
  v_17 = (char)102;
  v_9 = (float)p_7;
  v = 4294932817U;
  if (v_23 == ! ((unsigned long long)p - 18446744073709520276ULL) % (unsigned long long)(
              ! (v_19 / (unsigned int)((int)v_17 + 446)) + 940U)) {
    v_19 = (unsigned int)(- ((float)(4294967224U % (v_25 + 698U)) / (
                             v_9 + 549.f)));
    v_23 = (unsigned long long)v_21;
    v_15 = (signed char)((unsigned long long)((int)((char)v_9) * (int)v_17) * (
                         v_23 + 72ULL) + (unsigned long long)v);
  }
  else {
    v_15 = (signed char)(! (- (! p_7)));
    v_17 = (char)((unsigned long long)(! v_19 / ((v - 4294967289U) + 873U)) ^ p_5);
    v_21 = (int)v_25;
  }
  if ((unsigned int)(- v_17) + ((unsigned int)p_11 * v_19) % (unsigned int)(
                               (int)p_11 + 200) == (unsigned int)((int)(
                                                                  -7831185920.f * (float)(
                                                                  p_5 * 4275042069ULL)) % (
                                                                  v_21 + 740))) 
    result = 79UL;
  else {
    v_9 = (float)(((long long)p_11 - p_13 % 17272LL) + (long long)(! v_15));
    v = (unsigned int)(p_5 / ((unsigned long long)(- ((float)p_7 * v_9)) + 997ULL));
    result = (unsigned long)((unsigned int)(! (-28033 / (p + 481))) / (
                             v + 217U));
  }
  return result;
}


