//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647909260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, char p_9, float p_15, char p_17)
{
  char v_21;
  unsigned short v_19;
  unsigned long long v_13;
  unsigned long v_11;
  unsigned long v_7;
  float v_5;
  unsigned long long v;
  unsigned int result;
  v_21 = (char)-101;
  v_19 = (unsigned short)p_9;
  v_13 = 976680259ULL;
  v_11 = 66474597UL;
  v_5 = (float)(((unsigned long long)(- v_11) % (v_13 * (unsigned long long)v_11 + 629ULL)) / (unsigned long long)(
                (int)(p_15 / ((float)p_17 + 988.f)) % (((int)p | (int)v_19) + 800) + 458)) * (
        (float)((int)(- v_21) / ((int)((char)p_15) + 16)) - 7.10696240984e+37f);
  v_7 = 9943UL;
  v = (unsigned long long)(- (- (v_5 - 23.f))) & (31547ULL + (unsigned long long)(
                                                  (v_7 + (unsigned long)p) / (unsigned long)(
                                                  (int)p_9 + 903)));
  result = (unsigned int)(6762592768.f * (float)((! v - 18446744073709504144ULL % (unsigned long long)(
                                                        (int)p + 663)) % 3934852697ULL));
  return result;
}


