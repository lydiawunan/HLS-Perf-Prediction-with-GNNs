#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 424078018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned long p_13, signed char p_19)
{
  unsigned int v_17;
  short v_15;
  unsigned char v_11;
  long long v_9;
  unsigned long v_7;
  long long v_5;
  float v;
  unsigned long result;
  v_17 = (unsigned int)p_19;
  v_11 = (unsigned char)p;
  v_7 = 4294966468UL;
  v_5 = -33303LL;
  result = 4051836205UL;
  if ((long long)(((3256UL / (unsigned long)(p + 432)) % ((unsigned long)p_19 / (
                                                          result + 795UL) + 245UL)) % 833UL) > (
      v_5 * 11771LL & 58LL)) {
    v_7 = 4294967285UL;
    result = (unsigned long)(- (- p * (int)(- v_11)));
    v_9 = (long long)(result / 25365UL);
  }
  else {
    v_15 = (short)(((unsigned int)(13786 * (int)((short)6105589248.f)) * (
                    (unsigned int)p * v_17)) * (unsigned int)-348.590474824);
    v_9 = (long long)v_15;
    v_5 = (long long)(- (((unsigned long long)p / 18446744073434380629ULL) * (unsigned long long)(
                         83UL % (p_13 + 397UL))));
  }
  if (19LL * v_5 >= - ((long long)((unsigned long)p % (v_7 + 325UL)) | ! v_9)) 
    result = 30427UL;
  else {
    v = (float)p;
    result = (unsigned long)(38831.f / (- v + 839.f));
    result = 9762UL % (result + 51UL);
  }
  return result;
}


