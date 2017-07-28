# -*- coding: utf-8 -*-
# States
import numpy as np
from hidden_markov import hmm
# ====Initializing Parameters ====

# States
states = ('noun','pronoun','determiner','verb','adjective','adverb','postposition','conjunction','particle','quanifier','punctuation','other')

# list of possible observations
possible_observation = ('।' ,'আগুনে' ,'আতঙ্ক' ,'এ' ,'কেউ' ,'ছড়িয়ে' ,'তবে' ,'পড়ে' ,'মধ্যে' ,'লোকজনের' ,'সময়' ,'হতাহত' ,'হয়নি' ,'এই' )

# The observations that we observe and feed to the model
obs1 = ('কেউ' ,'হতাহত' ,'হয়নি' )
obs2 = ('B', 'A','B')

# Number of observation sequece 1 and observation sequence 2
quantities_observations = [10, 20]

observation_tuple = []
observation_tuple.extend( [obs1,obs2] )

# Input parameters as Numpy matrices
start_probability = np.matrix( '0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.0 0.0 ')
transition_probability = np.matrix(np.loadtxt('transition.txt', usecols=range(12)))
emission_probability = np.matrix(np.loadtxt('emision.txt', usecols=range(14)))

test = hmm(states,possible_observation,start_probability,transition_probability,emission_probability)

print test.viterbi(obs1)