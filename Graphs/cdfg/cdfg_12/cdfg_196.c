#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 15925698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned short p_4, unsigned short p_6, unsigned char p_8,
          unsigned int p_10)
{
  unsigned long v_23;
  signed char v_21;
  unsigned long long v_19;
  char v_17;
  long v_15;
  signed char v_13;
  unsigned int v;
  short result;
  v_21 = (signed char)59;
  v_19 = (unsigned long long)p_10;
  v_17 = (char)p;
  v_15 = (long)p_8;
  v_13 = (signed char)57;
  v = p_10;
  while ((unsigned int)((int)p_8 % 956 | (78 << ((int)(- v_17) & 7))) == - v) {
    v_23 = v_19 * 22224ULL;
    v_17 = (char)((unsigned long long)v_23 / (- ((unsigned long long)v_15 / 18446744073709548285ULL) + 169ULL));
    v_19 = (unsigned long long)(((int)(- p_4) - (int)((char)2.75229032854e+38f) / (
                                                (int)v_17 + 535)) | (int)v_21);
    v_17 = (char)((1066599635UL - (unsigned long)(v_15 % 5L)) ^ (unsigned long)(
                  (int)v_17 - (int)(~ v_13)));
  }
  while_0_break: ;
  if ((unsigned long)(v % 4294936381U) != (unsigned long)(- ((long)((int)v_13 % (
                                                                    (int)p + 673)) % (
                                                             ((long)p_6 + v_15) + 35L)))) 
    result = (short)-7127;
  else result = (short)((55480 * ((int)p % ((int)p_4 + 238))) / ((int)(- p) / (
                                                                 (int)p_6 * (int)((unsigned short)-992.050456475) + 723) + 6));
  return result;
}


