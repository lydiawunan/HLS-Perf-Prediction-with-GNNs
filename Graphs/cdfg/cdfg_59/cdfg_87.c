#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606753729
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, int p_9, long p_13, unsigned char p_15,
              signed char p_19)
{
  unsigned long long v_29;
  float v_27;
  unsigned int v_25;
  unsigned char v_23;
  char v_21;
  char v_17;
  unsigned short v_11;
  long v_7;
  long v_5;
  char v;
  long long result;
  v_29 = 18446744073636336753ULL;
  v_27 = (float)p_15;
  v_25 = 63508U;
  v_23 = p_15;
  v_21 = (char)-64;
  v_17 = (char)-12;
  v_11 = (unsigned short)27013;
  v_7 = -589877112L;
  v_5 = -976611256L;
  v = (char)62;
  while (((long long)((int)(~ v) * (int)(! v_21)) | (long long)(30460 % (
                                                                (int)v_23 + 433)) * ~ p) > (long long)(
         (double)((unsigned long)((unsigned int)v_11 + v_25) % (unsigned long)(
                  -859L / (v_5 + 98L) + 770L)) - 7669960871.24)) {
    v = v_29 % 18446744073709518057ULL;
    v_7 = 0L;
    v_23 = (unsigned char)182;
    v_11 = (unsigned short)((float)(- (4294935380U ^ (unsigned int)v_23)) / (
                            v_27 + 310.f));
  }
  while_0_break: ;
  if ((long)(~ v_11) < ((p_13 + (long)p_15) - (long)v_17) % (long)((int)v * (int)p_19 + 733)) {
    v_5 = v_7;
    v = (char)78;
    result = ! ((p * (long long)v) / ((p ^ (long long)v_5) + 569LL));
  }
  else result = (long long)(4294937088.f + (-6.01867676364e+37f - (float)(~ p_9)));
  return result;
}


