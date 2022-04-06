using System;
using System.Diagnostics;
using System.Reflection;
using CoreLib;

namespace Analyze
{
    using System.Runtime.InteropServices;

    [ComVisible(true)]
    [Guid("94183CED-A9FC-4E26-8358-45408FBF2115")]
    public interface IProcessingPlugins
    {
        void Initialize(DoWork piDoWork);
        void ProcessFlaw();
    }

    [ComVisible(true)]
    public class Class1 : IProcessingPlugins
    {
        public void Initialize(DoWork piDoWork)
        {
            _piDoWork = piDoWork;
        }

        public void ProcessFlaw()
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