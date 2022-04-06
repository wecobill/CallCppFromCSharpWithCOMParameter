using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.InteropServices;
using COMLib;

namespace Analyze
{
    [ComVisible(true)]
    public class Class1 : IProcessingPlugins
    {
        void IProcessingPlugins.Initialize(object piDoWork)
        {
            _piDoWork = piDoWork as DoWork;
        }

        void IProcessingPlugins.ProcessFlaw()
        {
            try
            {
                IEventData eventData = new EventData() as IEventData;
                eventData.Key = 47;
                var parameters = new object[1];
                parameters[0] = eventData;
                _piDoWork.GetType().InvokeMember("SendEvent", BindingFlags.InvokeMethod | BindingFlags.Instance | BindingFlags.Public, null, _piDoWork, parameters);
            }
            catch (Exception ex)
            {
                Debug.Assert(false, ex.Message);
            }
        }

        private DoWork _piDoWork;
    }
}