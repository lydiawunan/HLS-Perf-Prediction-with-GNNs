#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 412478393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, short p_5, signed char p_15[3])
{
  double v_17;
  char v_13;
  unsigned int v_11;
  unsigned long long v_9;
  signed char v_7;
  double v;
  unsigned long result;
  v_17 = -8423586102.56;
  v_11 = 617868720U;
  v_7 = (signed char)p_5;
  v_13 = (char)(-127-1);
  v_9 = (unsigned long long)(! ((50671LL % (-62756807LL % (long long)(
                                            v_11 + 358U) + 139LL)) % (long long)(
                                ((int)v_13 * (int)p_5) * ((int)p_15[1] / (
                                                          (int)((signed char)v_17) + 770)) + 699)));
  v = (double)(! (- ((unsigned long long)v_7 % (v_9 + 399ULL)) + 19721ULL));
  result = (unsigned long)((int)((short)(- (v + (double)p) / 36627.)) | (int)p_5);
  return result;
}


