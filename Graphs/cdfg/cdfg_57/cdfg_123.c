#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993331487
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, char p_9, int p_17,
                   unsigned long long p_23[4])
{
  unsigned long long v_27;
  signed char v_25;
  float v_21;
  unsigned int v_19;
  unsigned int v_15;
  unsigned long long v_13;
  int v_11;
  short v_7;
  unsigned short v_5;
  signed char v;
  unsigned short result;
  v_27 = (unsigned long long)p_17;
  v_25 = (signed char)p_9;
  v_21 = (float)p;
  v_19 = (unsigned int)p_23[3];
  v_13 = (unsigned long long)p_17;
  v_11 = (int)p;
  v_7 = (short)-24902;
  result = (unsigned short)30784;
  if ((unsigned long long)((int)((char)((double)((float)p_9 - v_21) / -3.39874862669e+38)) / (
                           (int)(- (! p_9)) + 345)) < (unsigned long long)(~ (! p_9)) % (
                                                      - (v_13 - 92ULL) + 191ULL)) {
    result = (unsigned short)(- (! p_17) / 102);
    v_13 = (unsigned long long)p;
    v_15 = (unsigned int)((unsigned long long)(- v_21) / (((unsigned long long)(
                                                           (int)result % (
                                                           (int)p_9 + 650)) | 
                                                           p_23[3] * (unsigned long long)p_17) + 409ULL));
  }
  else {
    v_15 = (unsigned int)p_17;
    v_13 = (unsigned long long)((p - (unsigned int)v_7) + 26091U) | (
                                                                    (unsigned long long)v_11 * p_23[3]) / (
                                                                    v_27 + 129ULL);
    v_11 = ! (! (15080 / ((int)v_25 + 768)));
  }
  if (v_13 % ((v_13 + (unsigned long long)p_17) * (unsigned long long)(
              p / ((unsigned int)-3555235328.f + 648U)) + 292ULL) >= (unsigned long long)v_19) {
    v = (signed char)((18446744073709505859ULL + (unsigned long long)(- p)) / (unsigned long long)(
                      (int)result + 119));
    result = (unsigned short)((int)(~ v) / 26564);
    result = result;
  }
  else {
    v_5 = (unsigned short)(~ ((unsigned int)(29510 << (v_13 & 15ULL)) + v_15));
    v_7 = (short)((float)(126 + (int)(~ p_9)) * (2.07824886384e+38f - (float)v_11));
    result = (unsigned short)((int)((short)((float)(- v_5) - 3196854784.f)) * (int)v_7);
  }
  return result;
}


