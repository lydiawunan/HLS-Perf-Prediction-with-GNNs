#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 589859984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, short p_15, int p_17)
{
  short v_19;
  unsigned char v_13;
  unsigned short v_11;
  char v_8;
  char v_6;
  unsigned char v_4;
  unsigned int v;
  unsigned char result;
  v_19 = (short)p_17;
  v_13 = (unsigned char)p_15;
  v_11 = (unsigned short)32651;
  v_8 = (char)75;
  v_4 = (unsigned char)p;
  result = (unsigned char)41;
  if ((long long)(! (-761605785L | (long)((int)p_15 - (int)result))) >= 
      (0LL - -63922LL % (long long)((int)v_8 + 164)) % (long long)(((
                                                                    34321 - p_17) - (
                                                                    (int)v_19 | -64488)) + 211)) {
    v_8 = (char)((18446744073709520121ULL / (unsigned long long)((int)v_13 + 773)) * 54ULL);
    v_6 = (char)(((int)v_8 * (int)v_8 - (int)(- p)) % ((int)v_11 * ((int)v_8 / (
                                                                    (int)((char)3.30161195565e+38) + 470)) + 650));
    v = (unsigned int)(((unsigned long)v_4 / 4294910766UL - (unsigned long)(
                        (int)v_6 & -93)) * 679412735UL);
  }
  else {
    v_6 = (char)(114 - (int)(- p_15));
    v = (unsigned int)(! ((int)(~ v_6) + (int)p_15 / 57));
  }
  result = (unsigned char)(- (! (-329579151LL - (long long)v)));
  return result;
}


