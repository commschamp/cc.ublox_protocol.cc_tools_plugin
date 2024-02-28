// Generated by commsdsl2tools_qt v6.3.0

#include "AidAlmPollSv.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlmPollSv.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlmPollSvFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid(false));
    return props;
}

} // namespace

class AidAlmPollSvImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlmPollSv<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlmPollSvImpl
    >
{
public:
    AidAlmPollSvImpl() = default;
    AidAlmPollSvImpl(const AidAlmPollSvImpl&) = delete;
    AidAlmPollSvImpl(AidAlmPollSvImpl&&) = delete;
    virtual ~AidAlmPollSvImpl() = default;
    AidAlmPollSvImpl& operator=(const AidAlmPollSvImpl&) = default;
    AidAlmPollSvImpl& operator=(AidAlmPollSvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlmPollSv::AidAlmPollSv() : m_pImpl(new AidAlmPollSvImpl) {}
AidAlmPollSv::~AidAlmPollSv() = default;

AidAlmPollSv& AidAlmPollSv::operator=(const AidAlmPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlmPollSv& AidAlmPollSv::operator=(AidAlmPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlmPollSv::MsgIdParamType AidAlmPollSv::doGetId()
{
    return ::cc_ublox::message::AidAlmPollSv<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlmPollSv::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlmPollSv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlmPollSv::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlmPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlmPollSv::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlmPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlmPollSv::MsgIdParamType AidAlmPollSv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlmPollSv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlmPollSv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlmPollSv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlmPollSv::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlmPollSv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin