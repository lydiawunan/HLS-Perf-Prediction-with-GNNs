#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 865759569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, long p_13, unsigned long p_19)
{
  unsigned long v_17;
  long v_15;
  char v_11;
  unsigned long long v_9;
  unsigned char v_7;
  short v_5;
  unsigned char v;
  short result;
  v_17 = 21745UL;
  v_15 = (long)p;
  v_11 = (char)99;
  v_9 = 26960ULL;
  v_7 = (unsigned char)215;
  v = (unsigned char)47;
  if ((unsigned long long)(~ p) != 39824ULL / (unsigned long long)(((long long)(! v_7) + 840743060LL) + 706LL)) {
    result = (short)((v_17 % ((unsigned long)2.89955461712e+38f + 937UL) + 1047303686UL) - (unsigned long)p_13);
    v = (unsigned char)(-1369902L - v_15);
    v_7 = (unsigned char)(! (- p_13 >> ((61661 - (int)v) & 31)));
  }
  else {
    v_11 = (char)(- p_19);
    result = (short)((~ v_9 % (unsigned long long)(! p + 821)) * 4258543443ULL);
    v_7 = (unsigned char)(! ((int)(- v_7) - (int)((unsigned char)(-61.8448295593f * (float)p))));
  }
  while ((float)(~ ((int)((unsigned char)899.672874696) & (int)v)) > 
         4341959680.f * (float)((long long)(~ p) * ((long long)p | -31518LL))) {
    v_5 = v_9 - (unsigned long long)((unsigned int)v_7 + 382508239U);
    result = (short)(! v_15 - (long)v_5);
    v = (unsigned char)(- p_13);
    v = (unsigned char)(3902459737UL % (unsigned long)(((unsigned int)v_11 - 1005735322U) + 692U) + (unsigned long)(! (
                        (long)v + p_13)));
  }
  while_0_break: ;
  return result;
}


