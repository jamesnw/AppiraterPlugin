/**
 * Phonegap Appirater plugin
 * Copyright (c) James Stuckey Weber 2012
 *
 */
var AppiraterPlugin = {
    
     sigEvent: function() {
          return PhoneGap.exec("AppiraterPlugin.sigEvent");
     }
};