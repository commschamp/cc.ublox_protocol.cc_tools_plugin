// Generated by commsdsl2tools_qt v6.3.4

#include "TimVcocalStop.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/TimVcocalStop.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalStopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    return props;
}

} // namespace

class TimVcocalStopImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::TimVcocalStop<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        TimVcocalStopImpl
    >
{
public:
    TimVcocalStopImpl() = default;
    TimVcocalStopImpl(const TimVcocalStopImpl&) = delete;
    TimVcocalStopImpl(TimVcocalStopImpl&&) = delete;
    virtual ~TimVcocalStopImpl() = default;
    TimVcocalStopImpl& operator=(const TimVcocalStopImpl&) = default;
    TimVcocalStopImpl& operator=(TimVcocalStopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocalStop::TimVcocalStop() : m_pImpl(new TimVcocalStopImpl) {}
TimVcocalStop::~TimVcocalStop() = default;

TimVcocalStop& TimVcocalStop::operator=(const TimVcocalStop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocalStop& TimVcocalStop::operator=(TimVcocalStop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

TimVcocalStop::MsgIdParamType TimVcocalStop::doGetId()
{
    return ::cc_ublox::message::TimVcocalStop<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* TimVcocalStop::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocalStop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocalStop::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocalStop::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocalStop::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocalStop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocalStop::MsgIdParamType TimVcocalStop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocalStop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocalStop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocalStop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocalStop::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocalStop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
